﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qapps/model/CardType.h>
#include <aws/qapps/model/PluginType.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A card in an Q App that integrates with a third-party plugin or
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/QPluginCard">AWS
   * API Reference</a></p>
   */
  class QPluginCard
  {
  public:
    AWS_QAPPS_API QPluginCard();
    AWS_QAPPS_API QPluginCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API QPluginCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the plugin card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline QPluginCard& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline QPluginCard& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline QPluginCard& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title or label of the plugin card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline QPluginCard& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline QPluginCard& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline QPluginCard& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any dependencies or requirements for the plugin card.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline QPluginCard& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}
    inline QPluginCard& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}
    inline QPluginCard& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline QPluginCard& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
    inline QPluginCard& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline QPluginCard& WithType(const CardType& value) { SetType(value); return *this;}
    inline QPluginCard& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prompt or instructions displayed for the plugin card.</p>
     */
    inline const Aws::String& GetPrompt() const{ return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    inline void SetPrompt(const Aws::String& value) { m_promptHasBeenSet = true; m_prompt = value; }
    inline void SetPrompt(Aws::String&& value) { m_promptHasBeenSet = true; m_prompt = std::move(value); }
    inline void SetPrompt(const char* value) { m_promptHasBeenSet = true; m_prompt.assign(value); }
    inline QPluginCard& WithPrompt(const Aws::String& value) { SetPrompt(value); return *this;}
    inline QPluginCard& WithPrompt(Aws::String&& value) { SetPrompt(std::move(value)); return *this;}
    inline QPluginCard& WithPrompt(const char* value) { SetPrompt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type or category of the plugin used by the card.</p>
     */
    inline const PluginType& GetPluginType() const{ return m_pluginType; }
    inline bool PluginTypeHasBeenSet() const { return m_pluginTypeHasBeenSet; }
    inline void SetPluginType(const PluginType& value) { m_pluginTypeHasBeenSet = true; m_pluginType = value; }
    inline void SetPluginType(PluginType&& value) { m_pluginTypeHasBeenSet = true; m_pluginType = std::move(value); }
    inline QPluginCard& WithPluginType(const PluginType& value) { SetPluginType(value); return *this;}
    inline QPluginCard& WithPluginType(PluginType&& value) { SetPluginType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the plugin used by the card.</p>
     */
    inline const Aws::String& GetPluginId() const{ return m_pluginId; }
    inline bool PluginIdHasBeenSet() const { return m_pluginIdHasBeenSet; }
    inline void SetPluginId(const Aws::String& value) { m_pluginIdHasBeenSet = true; m_pluginId = value; }
    inline void SetPluginId(Aws::String&& value) { m_pluginIdHasBeenSet = true; m_pluginId = std::move(value); }
    inline void SetPluginId(const char* value) { m_pluginIdHasBeenSet = true; m_pluginId.assign(value); }
    inline QPluginCard& WithPluginId(const Aws::String& value) { SetPluginId(value); return *this;}
    inline QPluginCard& WithPluginId(Aws::String&& value) { SetPluginId(std::move(value)); return *this;}
    inline QPluginCard& WithPluginId(const char* value) { SetPluginId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action identifier of the action to be performed by the plugin card.</p>
     */
    inline const Aws::String& GetActionIdentifier() const{ return m_actionIdentifier; }
    inline bool ActionIdentifierHasBeenSet() const { return m_actionIdentifierHasBeenSet; }
    inline void SetActionIdentifier(const Aws::String& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = value; }
    inline void SetActionIdentifier(Aws::String&& value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier = std::move(value); }
    inline void SetActionIdentifier(const char* value) { m_actionIdentifierHasBeenSet = true; m_actionIdentifier.assign(value); }
    inline QPluginCard& WithActionIdentifier(const Aws::String& value) { SetActionIdentifier(value); return *this;}
    inline QPluginCard& WithActionIdentifier(Aws::String&& value) { SetActionIdentifier(std::move(value)); return *this;}
    inline QPluginCard& WithActionIdentifier(const char* value) { SetActionIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;

    PluginType m_pluginType;
    bool m_pluginTypeHasBeenSet = false;

    Aws::String m_pluginId;
    bool m_pluginIdHasBeenSet = false;

    Aws::String m_actionIdentifier;
    bool m_actionIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
