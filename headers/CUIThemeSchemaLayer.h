
@interface CUIThemeSchemaLayer : NSObject {

    @"NSArray" _renditions;
    @"NSString" _name;
    Q _index;
}
@property (nonatomic, retain, readwrite) NSArray* renditions;
@property (nonatomic, retain, readwrite) NSString* name;
@property (nonatomic, assign, readwrite) NSNumber* index;
 + (id) layerWithRenditions:(id)aname:(id)bindex:(Q)c;

 - (id) name;
 - (Q) index;
 - (void) setName:(id)a;
 - (id) renditions;
 - (void) setRenditions:(id)a;
 - (void) calculateColumLefts:(^@)arowTops:(^@)btotalSize:(^{CGSize=dd})cforPartFeatures:(Q)d;
 - (void) setIndex:(Q)a;
 - (id) initWithRenditions:(id)aname:(id)bindex:(Q)c;
 - (d) translateFromWidthsOrHeightsToLeftsOrTops:(id)aleftsOrTops:(^@)b;


@end
