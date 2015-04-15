
@interface CUIThemeSchema : NSObject {

}
 + (id) schemaForPlatform:(long long)a;
 + (id) defaultSchema;

 - (long long) schemaVersion;
 - (r^{?=q**}) elementCategoryAtIndex:(unsigned long long)a;
 - (unsigned long long) elementCategoryCount;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) elementDefinitionAtIndex:(unsigned long long)a;
 - (unsigned long long) elementDefinitionCount;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) sortedElementDefinitionAtIndex:(unsigned long long)a;
 - (unsigned long long) partDefinitionCountForElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (unsigned long long) dimensionDefinitionCountForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) elementDefinitionWithName:(id)a;
 - (r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}) partDefinitionWithName:(id)aforElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})b;
 - (id) widgetNameForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}) partDefinitionForWidgetName:(id)a;
 - (id) schemaRenditionsForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;
 - (void) enumerateAvailableThemeAttributesInPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})ausingBlock:(@?)b;
 - (void) enumerateAvailableValuesForThemeAttribute:(int)ainPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})busingBlock:(@?)c;
 - (r^{?=q**}) categoryForElementDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) effectDefinitionAtIndex:(unsigned long long)a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) sortedEffectDefinitionAtIndex:(unsigned long long)a;
 - (r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]}) effectDefinitionWithName:(id)a;
 - (unsigned long long) effectDefinitionCount;
 - (unsigned long long) partDefinitionCountForEffectDefinition:(r^{?=**Bq[7{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]}]})a;
 - (id) schemaEffectRenditionsForPartDefinition:(r^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})a;


@end
