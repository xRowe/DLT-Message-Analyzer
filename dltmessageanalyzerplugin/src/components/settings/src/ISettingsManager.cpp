#include "../api/ISettingsManager.hpp"

#include "dma/base/ForceLink.hpp"

#include "DMA_Plantuml.hpp"

ISettingsManager::ISettingsManager()
{

}

ISettingsManager::~ISettingsManager()
{

}

// tAliasItem
ISettingsManager::tAliasItem::tAliasItem():
    isDefault(false),
    alias(),
    regex(),
    type(eRegexPatternType::eTextual),
    UUID(),
    references()
{}

ISettingsManager::tAliasItem::tAliasItem(bool isDefault_,
                                         const QString& alias_,
                                         const QString& regex_,
                                         const eRegexPatternType& type_,
                                         const tUUID& UUID_,
                                         const tPatternReferences& references_):
    isDefault(isDefault_),
    alias(alias_),
    regex(regex_),
    type(type_),
    UUID(UUID_),
    references(references_)
{}

bool ISettingsManager::tAliasItem::operator==(const tAliasItem& val) const
{
    return isDefault == val.isDefault &&
            alias == val.alias &&
            regex == val.regex;
}

DMA_FORCE_LINK_ANCHOR_CPP(ISettingsManager)

PUML_PACKAGE_BEGIN(DMA_Settings_API)
    PUML_CLASS_BEGIN(ISettingsManager)
        PUML_INHERITANCE_CHECKED(QObject, extends)
    PUML_CLASS_END()
PUML_PACKAGE_END()
