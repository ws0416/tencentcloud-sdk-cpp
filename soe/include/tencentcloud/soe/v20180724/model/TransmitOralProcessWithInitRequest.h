/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSWITHINITREQUEST_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSWITHINITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TransmitOralProcessWithInit请求参数结构体
                */
                class TransmitOralProcessWithInitRequest : public AbstractModel
                {
                public:
                    TransmitOralProcessWithInitRequest();
                    ~TransmitOralProcessWithInitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
                     * @return SeqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
                     */
                    int64_t GetSeqId() const;

                    /**
                     * 设置流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
                     * @param SeqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
                     */
                    void SetSeqId(const int64_t& _seqId);

                    /**
                     * 判断参数 SeqId 是否已赋值
                     * @return SeqId 是否已赋值
                     */
                    bool SeqIdHasBeenSet() const;

                    /**
                     * 获取是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @return IsEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     */
                    int64_t GetIsEnd() const;

                    /**
                     * 设置是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @param IsEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     */
                    void SetIsEnd(const int64_t& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取语音文件类型 	1:raw, 2:wav, 3:mp3(三种格式目前仅支持16k采样率16bit编码单声道，如有不一致可能导致评估不准确或失败)。
                     * @return VoiceFileType 语音文件类型 	1:raw, 2:wav, 3:mp3(三种格式目前仅支持16k采样率16bit编码单声道，如有不一致可能导致评估不准确或失败)。
                     */
                    int64_t GetVoiceFileType() const;

                    /**
                     * 设置语音文件类型 	1:raw, 2:wav, 3:mp3(三种格式目前仅支持16k采样率16bit编码单声道，如有不一致可能导致评估不准确或失败)。
                     * @param VoiceFileType 语音文件类型 	1:raw, 2:wav, 3:mp3(三种格式目前仅支持16k采样率16bit编码单声道，如有不一致可能导致评估不准确或失败)。
                     */
                    void SetVoiceFileType(const int64_t& _voiceFileType);

                    /**
                     * 判断参数 VoiceFileType 是否已赋值
                     * @return VoiceFileType 是否已赋值
                     */
                    bool VoiceFileTypeHasBeenSet() const;

                    /**
                     * 获取语音编码类型	1:pcm。
                     * @return VoiceEncodeType 语音编码类型	1:pcm。
                     */
                    int64_t GetVoiceEncodeType() const;

                    /**
                     * 设置语音编码类型	1:pcm。
                     * @param VoiceEncodeType 语音编码类型	1:pcm。
                     */
                    void SetVoiceEncodeType(const int64_t& _voiceEncodeType);

                    /**
                     * 判断参数 VoiceEncodeType 是否已赋值
                     * @return VoiceEncodeType 是否已赋值
                     */
                    bool VoiceEncodeTypeHasBeenSet() const;

                    /**
                     * 获取当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * @return UserVoiceData 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     */
                    std::string GetUserVoiceData() const;

                    /**
                     * 设置当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     * @param UserVoiceData 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     */
                    void SetUserVoiceData(const std::string& _userVoiceData);

                    /**
                     * 判断参数 UserVoiceData 是否已赋值
                     * @return UserVoiceData 是否已赋值
                     */
                    bool UserVoiceDataHasBeenSet() const;

                    /**
                     * 获取语音段唯一标识，一个完整语音一个SessionId。
                     * @return SessionId 语音段唯一标识，一个完整语音一个SessionId。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置语音段唯一标识，一个完整语音一个SessionId。
                     * @param SessionId 语音段唯一标识，一个完整语音一个SessionId。
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值无效。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @return RefText 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值无效。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string GetRefText() const;

                    /**
                     * 设置被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值无效。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @param RefText 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值无效。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    void SetRefText(const std::string& _refText);

                    /**
                     * 判断参数 RefText 是否已赋值
                     * @return RefText 是否已赋值
                     */
                    bool RefTextHasBeenSet() const;

                    /**
                     * 获取语音输入模式，0：流式分片，1：非流式一次性评估
                     * @return WorkMode 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    int64_t GetWorkMode() const;

                    /**
                     * 设置语音输入模式，0：流式分片，1：非流式一次性评估
                     * @param WorkMode 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    void SetWorkMode(const int64_t& _workMode);

                    /**
                     * 判断参数 WorkMode 是否已赋值
                     * @return WorkMode 是否已赋值
                     */
                    bool WorkModeHasBeenSet() const;

                    /**
                     * 获取评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * @return EvalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     */
                    int64_t GetEvalMode() const;

                    /**
                     * 设置评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     * @param EvalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     */
                    void SetEvalMode(const int64_t& _evalMode);

                    /**
                     * 判断参数 EvalMode 是否已赋值
                     * @return EvalMode 是否已赋值
                     */
                    bool EvalModeHasBeenSet() const;

                    /**
                     * 获取评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @return ScoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    double GetScoreCoeff() const;

                    /**
                     * 设置评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @param ScoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    void SetScoreCoeff(const double& _scoreCoeff);

                    /**
                     * 判断参数 ScoreCoeff 是否已赋值
                     * @return ScoreCoeff 是否已赋值
                     */
                    bool ScoreCoeffHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     * @return SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    std::string GetSoeAppId() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     * @param SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    void SetSoeAppId(const std::string& _soeAppId);

                    /**
                     * 判断参数 SoeAppId 是否已赋值
                     * @return SoeAppId 是否已赋值
                     */
                    bool SoeAppIdHasBeenSet() const;

                    /**
                     * 获取音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段。
                     * @return StorageMode 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段。
                     */
                    int64_t GetStorageMode() const;

                    /**
                     * 设置音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段。
                     * @param StorageMode 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段。
                     */
                    void SetStorageMode(const int64_t& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @return SentenceInfoEnabled 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t GetSentenceInfoEnabled() const;

                    /**
                     * 设置输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @param SentenceInfoEnabled 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    void SetSentenceInfoEnabled(const int64_t& _sentenceInfoEnabled);

                    /**
                     * 判断参数 SentenceInfoEnabled 是否已赋值
                     * @return SentenceInfoEnabled 是否已赋值
                     */
                    bool SentenceInfoEnabledHasBeenSet() const;

                    /**
                     * 获取评估语言，0：英文，1：中文。
                     * @return ServerType 评估语言，0：英文，1：中文。
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置评估语言，0：英文，1：中文。
                     * @param ServerType 评估语言，0：英文，1：中文。
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @return IsAsync 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @param IsAsync 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     */
                    bool IsAsyncHasBeenSet() const;

                    /**
                     * 获取查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 评估结果。
                     * @return IsQuery 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 评估结果。
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 评估结果。
                     * @param IsQuery 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 评估结果。
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * @return TextMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     */
                    int64_t GetTextMode() const;

                    /**
                     * 设置输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     * @param TextMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     */
                    void SetTextMode(const int64_t& _textMode);

                    /**
                     * 判断参数 TextMode 是否已赋值
                     * @return TextMode 是否已赋值
                     */
                    bool TextModeHasBeenSet() const;

                private:

                    /**
                     * 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
                     */
                    int64_t m_seqId;
                    bool m_seqIdHasBeenSet;

                    /**
                     * 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     */
                    int64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 语音文件类型 	1:raw, 2:wav, 3:mp3(三种格式目前仅支持16k采样率16bit编码单声道，如有不一致可能导致评估不准确或失败)。
                     */
                    int64_t m_voiceFileType;
                    bool m_voiceFileTypeHasBeenSet;

                    /**
                     * 语音编码类型	1:pcm。
                     */
                    int64_t m_voiceEncodeType;
                    bool m_voiceEncodeTypeHasBeenSet;

                    /**
                     * 当前数据包数据, 流式模式下数据包大小可以按需设置，在网络良好的情况下，建议设置为0.5k，且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数），编码格式要求为BASE64。
                     */
                    std::string m_userVoiceData;
                    bool m_userVoiceDataHasBeenSet;

                    /**
                     * 语音段唯一标识，一个完整语音一个SessionId。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值无效。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string m_refText;
                    bool m_refTextHasBeenSet;

                    /**
                     * 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    int64_t m_workMode;
                    bool m_workModeHasBeenSet;

                    /**
                     * 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。
                     */
                    int64_t m_evalMode;
                    bool m_evalModeHasBeenSet;

                    /**
                     * 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    double m_scoreCoeff;
                    bool m_scoreCoeffHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    std::string m_soeAppId;
                    bool m_soeAppIdHasBeenSet;

                    /**
                     * 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段。
                     */
                    int64_t m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t m_sentenceInfoEnabled;
                    bool m_sentenceInfoEnabledHasBeenSet;

                    /**
                     * 评估语言，0：英文，1：中文。
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                    /**
                     * 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 评估结果。
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。
                     */
                    int64_t m_textMode;
                    bool m_textModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSWITHINITREQUEST_H_
