﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Regex.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WAFV2
{
namespace Model
{

  /**
   * <note> <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p> </note> <p>Contains one or more regular
   * expressions. </p> <p>AWS WAF assigns an ARN to each <code>RegexPatternSet</code>
   * that you create. To use a set in a rule, you provide the ARN to the <a>Rule</a>
   * statement <a>RegexPatternSetReferenceStatement</a>. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RegexPatternSet">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RegexPatternSet
  {
  public:
    RegexPatternSet();
    RegexPatternSet(Aws::Utils::Json::JsonView jsonValue);
    RegexPatternSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline RegexPatternSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline RegexPatternSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name of the set. You cannot change the name after you create the
     * set.</p>
     */
    inline RegexPatternSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RegexPatternSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RegexPatternSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline RegexPatternSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RegexPatternSet& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RegexPatternSet& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline RegexPatternSet& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline RegexPatternSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline RegexPatternSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A friendly description of the set. You cannot change the description of a set
     * after you create it.</p>
     */
    inline RegexPatternSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const{ return m_regularExpressionList; }

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline void SetRegularExpressionList(const Aws::Vector<Regex>& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = value; }

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline void SetRegularExpressionList(Aws::Vector<Regex>&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::move(value); }

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline RegexPatternSet& WithRegularExpressionList(const Aws::Vector<Regex>& value) { SetRegularExpressionList(value); return *this;}

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline RegexPatternSet& WithRegularExpressionList(Aws::Vector<Regex>&& value) { SetRegularExpressionList(std::move(value)); return *this;}

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline RegexPatternSet& AddRegularExpressionList(const Regex& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(value); return *this; }

    /**
     * <p>The regular expression patterns in the set.</p>
     */
    inline RegexPatternSet& AddRegularExpressionList(Regex&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Regex> m_regularExpressionList;
    bool m_regularExpressionListHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws