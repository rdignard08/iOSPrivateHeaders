
@interface CUIThemeSchemaRenditionGroup : NSObject {

    CUIRenditionKey* _baseKey;
    NSArray* _renditions;
    ^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]} _part;
}
@property (nonatomic, retain, readwrite) NSArray* renditions;
 + (id) renditionGroupsForRenditions:(id)apart:(^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})b;

 - (id) description;
 - (void) dealloc;
 - (id) baseKey;
 - (id) initWithRenditions:(id)a part:(^{?=**[5{_renditionkeytoken=SS}]qq[12{?=**qQ}]})b ;
 - (id) renditions;
 - (void) setRenditions:(id)a ;
 - (long long) partFeatures;
 - (id) themeSchemaLayers;
 - (void) addLayoutMetricsToPSDImageRef:(id)a withRendition:(id)b ;
 - (id) schemaLayersAndLayerGroups;
 - (id) _renditionsSortedIntoLayers;
 - (id) _layerNameForDrawingLayer:(long long)a ;
 - (id) _layerNameForState:(long long)a ;
 - (void) addStatesAndDrawingLayersToPSDLayers:(id)a forPresentationState:(unsigned long long)b ;
 - (void) addValueOrDim1LayersToPSDLayers:(id)a forPresentationState:(unsigned long long)b state:(unsigned long long)c drawingLayer:(unsigned long long)d ;
 - (id) mutablePSDImageRef;
 - (id) mutablePSDImageRefColumnStyle;


@end
