
@interface CUIThemeSchemaLayer : NSObject {

    NSArray* _renditions;
    NSString* _name;
    unsigned long long _index;
}
@property (nonatomic, retain, readwrite) NSArray* renditions;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readwrite) NSNumber* index;
 + (id) layerWithRenditions:(id)aname:(id)bindex:(unsigned long long)c;

 - (id) name;
 - (unsigned long long) index;
 - (void) setName:(id)a;
 - (id) renditions;
 - (void) setRenditions:(id)a;
 - (void) calculateColumLefts:(^@)arowTops:(^@)btotalSize:(^{CGSize=dd})cforPartFeatures:(unsigned long long)d;
 - (void) setIndex:(unsigned long long)a;
 - (id) initWithRenditions:(id)aname:(id)bindex:(unsigned long long)c;
 - (double) translateFromWidthsOrHeightsToLeftsOrTops:(id)aleftsOrTops:(^@)b;


@end
