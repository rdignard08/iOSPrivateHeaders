
@interface CUIThemeSchema : NSObject {

}
 + (id) schemaForPlatform:(q)a;
 + (id) defaultSchema;

 - (q) schemaVersion;
 - (r^{?=q**}) elementCategoryAtIndex:(Q)a;
 - (Q) elementCategoryCount;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) elementDefinitionAtIndex:(Q)a;
 - (Q) elementDefinitionCount;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) sortedElementDefinitionAtIndex:(Q)a;
 - (Q) partDefinitionCountForElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (Q) dimensionDefinitionCountForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) elementDefinitionWithName:(id)a;
 - (r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}) partDefinitionWithName:(id)aforElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})b;
 - (id) widgetNameForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}) partDefinitionForWidgetName:(id)a;
 - (id) schemaRenditionsForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (void) enumerateAvailableThemeAttributesInPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})ausingBlock:(@?)b;
 - (void) enumerateAvailableValuesForThemeAttribute:(i)ainPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})busingBlock:(@?)c;
 - (r^{?=q**}) categoryForElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) effectDefinitionAtIndex:(Q)a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) sortedEffectDefinitionAtIndex:(Q)a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) effectDefinitionWithName:(id)a;
 - (Q) effectDefinitionCount;
 - (Q) partDefinitionCountForEffectDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (id) schemaEffectRenditionsForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;


@end
