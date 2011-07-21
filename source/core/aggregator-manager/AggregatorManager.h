/**
 * @file AggregatorManager.h
 * @author Zhongxia Li
 * @date Jul 5, 2011
 * @brief 
 */
#ifndef AGGREGATOR_MANAGER_H_
#define AGGREGATOR_MANAGER_H_

#include <net/aggregator/JobInfo.h>
#include <net/aggregator/JobAggregator.h>
#include <net/aggregator/AggregatorConfig.h>

#include "WorkerService.h"

#include <common/ResultType.h>

using namespace net::aggregator;

namespace sf1r
{

class AggregatorManager : public JobAggregator<AggregatorManager>
{
private:
    boost::shared_ptr<WorkerService> localWorkerService_;

public:
    void setLocalWorkerService(const boost::shared_ptr<WorkerService>& localWorkerService)
    {
        localWorkerService_ = localWorkerService;
    }

    /**
     * Interface which encapsulate calls to local service directly
     */
    template <typename RequestType, typename ResultType>
    bool get_local_result(
            const std::string& func,
            const RequestType& request,
            ResultType& result,
            std::string& error)
    {
        if (localWorkerService_)
        {
            return localWorkerService_->call(func, request, result, error);
        }
        else
        {
            error = "No local worker service.";
            return false;
        }
    }


public:
    /**
     * Functoin for merging results
     * @details Overload join_impl() to aggregate different results from multiple nodes
     * @{
     */

    /** keyword search result */
    void join_impl(const std::string& func, KeywordSearchResult& result, const std::vector<std::pair<workerid_t, KeywordSearchResult> >& resultList)
    {
        if (func == "getSearchResult")
        {
            mergeSearchResult(result, resultList);
        }
        else if (func == "getSummaryResult")
        {
            mergeSummaryResult(result, resultList);
        }
    }

    /** todo, mining result */

    /** @}*/

private:
    void mergeSearchResult(KeywordSearchResult& result, const std::vector<std::pair<workerid_t, KeywordSearchResult> >& resultList);

    void mergeSummaryResult(KeywordSearchResult& result, const std::vector<std::pair<workerid_t, KeywordSearchResult> >& resultList);

    // todo, mining result
};


} // end - namespace

#endif /* AGGREGATOR_MANAGER_H_ */