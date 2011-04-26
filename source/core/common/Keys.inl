/**
 * @file sf1r/driver/Keys.inl
 * @date Created <2011-04-26 16:00:00>
 *
 * This file is generated by generators/driver_keys.rb by collecting keys
 * from source code. Do not edit this file directly.
 */

#define SF1_DRIVER_KEYS \
(DOCID)\
(ITEMID)\
(USERID)\
(_categories)\
(_duplicated_document_count)\
(_id)\
(_image_id)\
(_rank)\
(_similar_document_count)\
(analyzer)\
(analyzer_result)\
(apply_la)\
(category_id)\
(cid)\
(cname)\
(collection)\
(conditions)\
(content)\
(counter)\
(doccount)\
(docid)\
(docid_list)\
(document_count)\
(document_support_count)\
(duplicate_with)\
(duration)\
(elapsed_time)\
(faceted)\
(group)\
(group_label)\
(highlight)\
(hit_docs_num)\
(id)\
(in)\
(index)\
(keywords)\
(label)\
(labels)\
(last_modified)\
(left_time)\
(level)\
(limit)\
(log_keywords)\
(manmade)\
(message)\
(meta)\
(mining)\
(name)\
(name_entity)\
(name_entity_item)\
(name_entity_list)\
(name_entity_type)\
(offset)\
(operator_)\
(order)\
(page_count)\
(page_start)\
(popular)\
(popular_queries)\
(prefix)\
(progress)\
(property)\
(query)\
(ranking_model)\
(realtime)\
(realtime_queries)\
(recent)\
(refined_query)\
(related_queries)\
(remote_ip)\
(remove_duplicated_result)\
(resource)\
(resources)\
(search)\
(search_session)\
(seconds)\
(select)\
(session_id)\
(sim_list)\
(similar_to)\
(similar_to_image)\
(snippet)\
(sort)\
(source)\
(status)\
(sub_labels)\
(summary)\
(summary_property_alias)\
(summary_sentence_count)\
(system_events)\
(taxonomy)\
(taxonomy_label)\
(timestamp)\
(top_k_count)\
(total_count)\
(type)\
(use_original_keyword)\
(use_synonym_extension)\
(user_queries)\
(value)


/* LOCATIONS

DOCID
  process/controllers/DocumentsController.cpp:436
  process/controllers/DocumentsController.cpp:503
  process/controllers/DocumentsController.cpp:551
  process/controllers/DocumentsGetHandler.cpp:273
  process/controllers/DocumentsGetHandler.cpp:275
  process/controllers/DocumentsGetHandler.cpp:328
  process/controllers/DocumentsGetHandler.cpp:353

ITEMID
  process/controllers/RecommendController.cpp:82
  process/controllers/RecommendController.cpp:353

USERID
  process/controllers/RecommendController.cpp:48
  process/controllers/RecommendController.cpp:144
  process/controllers/RecommendController.cpp:194
  process/controllers/RecommendController.cpp:238
  process/controllers/RecommendController.cpp:240
  process/controllers/RecommendController.cpp:289
  process/controllers/RecommendController.cpp:292
  process/controllers/RecommendController.cpp:298

_categories
  process/renderers/DocumentsRenderer.cpp:151

_duplicated_document_count
  process/renderers/DocumentsRenderer.cpp:132

_id
  process/renderers/DocumentsRenderer.cpp:39
  process/renderers/DocumentsRenderer.cpp:94
  process/controllers/FacetedController.cpp:393
  process/controllers/DocumentsGetHandler.cpp:268
  process/controllers/DocumentsGetHandler.cpp:270
  process/controllers/DocumentsGetHandler.cpp:328
  process/controllers/DocumentsGetHandler.cpp:345

_image_id
  process/renderers/DocumentsRenderer.cpp:145
  process/controllers/DocumentsGetHandler.cpp:192

_rank
  process/renderers/DocumentsRenderer.cpp:95

_similar_document_count
  process/renderers/DocumentsRenderer.cpp:139

analyzer
  process/parsers/SearchParser.cpp:200

analyzer_result
  process/controllers/DocumentsSearchHandler.cpp:492
  process/controllers/DocumentsSearchHandler.cpp:510

apply_la
  process/parsers/SearchParser.cpp:201

category_id
  process/controllers/FacetedController.cpp:413
  process/controllers/FacetedController.cpp:415

cid
  process/controllers/FacetedController.cpp:395

cname
  process/controllers/FacetedController.cpp:396

collection
  process/controllers/LogAnalysisController.cpp:191
  process/controllers/LogAnalysisController.cpp:247
  process/controllers/CommandsController.cpp:24
  process/controllers/KeywordsController.cpp:64
  process/controllers/DocumentsSearchHandler.cpp:77
  process/controllers/StatusController.cpp:44
  process/controllers/Sf1Controller.cpp:37
  process/controllers/QueryCorrectionController.cpp:28

conditions
  process/controllers/LogAnalysisController.cpp:62
  process/controllers/LogAnalysisController.cpp:64
  process/controllers/DocumentsSearchHandler.cpp:385
  process/controllers/DocumentsGetHandler.cpp:316

content
  process/controllers/LogAnalysisController.cpp:152
  process/controllers/FacetedController.cpp:49
  process/controllers/FacetedController.cpp:103

counter
  process/controllers/StatusController.cpp:73

doccount
  process/controllers/FacetedController.cpp:160
  process/controllers/FacetedController.cpp:277

docid
  process/controllers/FacetedController.cpp:394

docid_list
  process/controllers/FacetedController.cpp:428

document_count
  process/renderers/DocumentsRenderer.cpp:231
  process/renderers/DocumentsRenderer.cpp:295
  process/renderers/DocumentsRenderer.cpp:344
  process/renderers/DocumentsRenderer.cpp:350
  process/controllers/CommandsController.cpp:63
  process/controllers/StatusController.cpp:55
  process/controllers/StatusController.cpp:71

document_support_count
  process/renderers/DocumentsRenderer.cpp:263

duplicate_with
  process/controllers/DocumentsGetHandler.cpp:101

duration
  process/controllers/LogAnalysisController.cpp:196
  process/controllers/LogAnalysisController.cpp:267
  process/controllers/LogAnalysisController.cpp:271
  process/controllers/LogAnalysisController.cpp:279

elapsed_time
  process/controllers/StatusController.cpp:67

faceted
  process/controllers/DocumentsSearchHandler.cpp:701

group
  process/controllers/DocumentsSearchHandler.cpp:397
  process/controllers/DocumentsSearchHandler.cpp:706

group_label
  process/parsers/SearchParser.cpp:99
  process/parsers/SearchParser.cpp:119

highlight
  process/parsers/SelectParser.cpp:119

hit_docs_num
  process/controllers/LogAnalysisController.cpp:192
  process/controllers/LogAnalysisController.cpp:258

id
  process/renderers/DocumentsRenderer.cpp:294
  process/controllers/TopicController.cpp:71
  process/controllers/DocumentsController.cpp:463
  process/controllers/FacetedController.cpp:159
  process/controllers/FacetedController.cpp:276

in
  process/parsers/SearchParser.cpp:149

index
  process/controllers/StatusController.cpp:52

keywords
  process/parsers/SearchParser.cpp:86
  process/controllers/AutoFillController.cpp:102
  process/controllers/QueryCorrectionController.cpp:29

label
  process/renderers/DocumentsRenderer.cpp:230
  process/renderers/DocumentsRenderer.cpp:293
  process/renderers/DocumentsRenderer.cpp:349

labels
  process/renderers/DocumentsRenderer.cpp:220
  process/renderers/DocumentsRenderer.cpp:281
  process/renderers/DocumentsRenderer.cpp:345

last_modified
  process/controllers/StatusController.cpp:54
  process/controllers/StatusController.cpp:72
  process/controllers/StatusController.cpp:79
  process/controllers/StatusController.cpp:86

left_time
  process/controllers/StatusController.cpp:68

level
  process/controllers/LogAnalysisController.cpp:150
  process/controllers/FacetedController.cpp:157
  process/controllers/FacetedController.cpp:274

limit
  core/common/parsers/PageInfoParser.cpp:20
  core/common/parsers/PageInfoParser.cpp:22
  process/controllers/AutoFillController.cpp:77
  process/controllers/KeywordsController.cpp:65
  process/controllers/DocumentsController.cpp:562
  process/controllers/DocumentsController.cpp:564

log_keywords
  process/parsers/SearchParser.cpp:146

manmade
  process/controllers/FacetedController.cpp:387

message
  process/controllers/TestController.cpp:28
  process/controllers/TestController.cpp:28

meta
  process/controllers/StatusController.cpp:69

mining
  process/controllers/StatusController.cpp:77

name
  process/controllers/TopicController.cpp:61
  process/controllers/DocumentsController.cpp:466
  process/controllers/DocumentsController.cpp:534
  process/controllers/DocumentsController.cpp:542
  process/controllers/FacetedController.cpp:158
  process/controllers/FacetedController.cpp:275

name_entity
  process/controllers/DocumentsSearchHandler.cpp:696

name_entity_item
  process/parsers/SearchParser.cpp:96
  process/parsers/SearchParser.cpp:108
  process/renderers/DocumentsRenderer.cpp:262

name_entity_list
  process/renderers/DocumentsRenderer.cpp:254

name_entity_type
  process/parsers/SearchParser.cpp:97
  process/parsers/SearchParser.cpp:109

offset
  core/common/parsers/PageInfoParser.cpp:15
  core/common/parsers/PageInfoParser.cpp:17

operator_
  core/common/parsers/ConditionParser.cpp:68

order
  core/common/parsers/OrderParser.cpp:23

page_count
  process/controllers/LogAnalysisController.cpp:194
  process/controllers/LogAnalysisController.cpp:260

page_start
  process/controllers/LogAnalysisController.cpp:193
  process/controllers/LogAnalysisController.cpp:259

popular
  process/controllers/KeywordsController.cpp:126
  process/controllers/KeywordsController.cpp:136
  process/controllers/KeywordsController.cpp:138

popular_queries
  process/controllers/DocumentsSearchHandler.cpp:681

prefix
  process/controllers/AutoFillController.cpp:76

progress
  process/controllers/StatusController.cpp:66

property
  core/common/parsers/ConditionParser.cpp:43
  core/common/parsers/OrderParser.cpp:22
  process/parsers/SearchParser.cpp:129
  process/parsers/SearchParser.cpp:162
  process/parsers/GroupingParser.cpp:54
  process/parsers/SelectParser.cpp:118
  process/renderers/DocumentsRenderer.cpp:343

query
  process/controllers/LogAnalysisController.cpp:190
  process/controllers/LogAnalysisController.cpp:246

ranking_model
  process/parsers/SearchParser.cpp:207
  process/parsers/SearchParser.cpp:209

realtime
  process/controllers/KeywordsController.cpp:127
  process/controllers/KeywordsController.cpp:163
  process/controllers/KeywordsController.cpp:165

realtime_queries
  process/controllers/DocumentsSearchHandler.cpp:686

recent
  process/controllers/KeywordsController.cpp:97
  process/controllers/KeywordsController.cpp:99

refined_query
  process/controllers/DocumentsSearchHandler.cpp:719
  process/controllers/QueryCorrectionController.cpp:41

related_queries
  process/controllers/DocumentsSearchHandler.cpp:676

remote_ip
  process/controllers/DocumentsSearchHandler.cpp:76
  process/controllers/DocumentsGetHandler.cpp:40

remove_duplicated_result
  process/controllers/DocumentsSearchHandler.cpp:491

resource
  process/controllers/DocumentsController.cpp:339
  process/controllers/DocumentsController.cpp:372
  process/controllers/DocumentsController.cpp:401
  process/controllers/DocumentsController.cpp:435
  process/controllers/DocumentsController.cpp:502
  process/controllers/DocumentsController.cpp:551
  process/controllers/RecommendController.cpp:29
  process/controllers/RecommendController.cpp:147
  process/controllers/RecommendController.cpp:197
  process/controllers/RecommendController.cpp:240
  process/controllers/RecommendController.cpp:292
  process/controllers/RecommendController.cpp:297
  process/controllers/RecommendController.cpp:356

resources
  process/controllers/TopicController.cpp:54
  process/controllers/DocumentsSearchHandler.cpp:653
  process/controllers/DocumentsSearchHandler.cpp:664
  process/controllers/DocumentsController.cpp:458
  process/controllers/DocumentsController.cpp:527
  process/controllers/FacetedController.cpp:147
  process/controllers/FacetedController.cpp:210
  process/controllers/FacetedController.cpp:264
  process/controllers/FacetedController.cpp:327
  process/controllers/DocumentsGetHandler.cpp:48
  process/controllers/DocumentsGetHandler.cpp:183
  process/controllers/DocumentsGetHandler.cpp:393
  process/controllers/DocumentsGetHandler.cpp:411
  process/controllers/DocumentsGetHandler.cpp:443

search
  process/controllers/DocumentsSearchHandler.cpp:381

search_session
  process/controllers/DocumentsGetHandler.cpp:227
  process/controllers/DocumentsGetHandler.cpp:230

seconds
  process/controllers/TestController.cpp:43

select
  process/controllers/LogAnalysisController.cpp:26
  process/controllers/LogAnalysisController.cpp:28
  process/controllers/KeywordsController.cpp:75
  process/controllers/KeywordsController.cpp:79
  process/controllers/DocumentsSearchHandler.cpp:377
  process/controllers/DocumentsGetHandler.cpp:208

session_id
  process/controllers/LogAnalysisController.cpp:195

sim_list
  process/controllers/DocumentsController.cpp:535

similar_to
  process/controllers/TopicController.cpp:68
  process/controllers/TopicController.cpp:70
  process/controllers/DocumentsGetHandler.cpp:59

similar_to_image
  process/controllers/DocumentsGetHandler.cpp:143

snippet
  process/parsers/SelectParser.cpp:131

sort
  process/controllers/LogAnalysisController.cpp:46
  process/controllers/LogAnalysisController.cpp:48
  process/controllers/DocumentsSearchHandler.cpp:389

source
  process/controllers/LogAnalysisController.cpp:151

status
  process/controllers/StatusController.cpp:53
  process/controllers/StatusController.cpp:62
  process/controllers/StatusController.cpp:78
  process/controllers/StatusController.cpp:84

sub_labels
  process/renderers/DocumentsRenderer.cpp:236
  process/renderers/DocumentsRenderer.cpp:306
  process/renderers/DocumentsRenderer.cpp:351

summary
  process/parsers/SelectParser.cpp:120

summary_property_alias
  process/parsers/SelectParser.cpp:128

summary_sentence_count
  process/parsers/SelectParser.cpp:124

system_events
  process/controllers/LogAnalysisController.cpp:145

taxonomy
  process/controllers/DocumentsSearchHandler.cpp:691

taxonomy_label
  process/parsers/SearchParser.cpp:94
  process/parsers/SearchParser.cpp:107

timestamp
  process/controllers/LogAnalysisController.cpp:153
  process/controllers/LogAnalysisController.cpp:197
  process/controllers/LogAnalysisController.cpp:288
  process/controllers/LogAnalysisController.cpp:292
  process/controllers/LogAnalysisController.cpp:300

top_k_count
  process/controllers/DocumentsSearchHandler.cpp:98
  process/controllers/DocumentsSearchHandler.cpp:196

total_count
  process/controllers/AutoFillController.cpp:99
  process/controllers/DocumentsSearchHandler.cpp:97
  process/controllers/DocumentsSearchHandler.cpp:195
  process/controllers/DocumentsGetHandler.cpp:48
  process/controllers/DocumentsGetHandler.cpp:90
  process/controllers/DocumentsGetHandler.cpp:131
  process/controllers/DocumentsGetHandler.cpp:197
  process/controllers/DocumentsGetHandler.cpp:443

type
  process/renderers/DocumentsRenderer.cpp:252

use_original_keyword
  process/parsers/SearchParser.cpp:202

use_synonym_extension
  process/parsers/SearchParser.cpp:203

user_queries
  process/controllers/LogAnalysisController.cpp:185
  process/controllers/LogAnalysisController.cpp:230
  process/controllers/LogAnalysisController.cpp:235
  process/controllers/LogAnalysisController.cpp:238

value
  core/common/parsers/ConditionParser.cpp:50
  core/common/parsers/ConditionParser.cpp:57
  core/common/parsers/ConditionParser.cpp:64
  process/parsers/SearchParser.cpp:130

*/
