
@interface _UISearchBarAppearanceStorage : NSObject {

    @"NSMutableDictionary" searchFieldBackgroundImages;
    @"NSValue" searchFieldPositionAdjustment;
    @"NSMutableDictionary" iconImages;
    @"UIImage" separatorImage;
    @"UIImage" scopeBarBackgroundImage;
}
@property (nonatomic, retain, readwrite) NSValue* searchFieldPositionAdjustment;
@property (nonatomic, retain, readwrite) UIImage* separatorImage;
@property (nonatomic, retain, readwrite) UIImage* scopeBarBackgroundImage;

 - (void) dealloc;
 - (void) setSearchFieldBackgroundImage:(id)aforState:(Q)b;
 - (id) searchFieldBackgroundImageForState:(Q)a;
 - (void) setImage:(id)aforIcon:(q)bstate:(Q)c;
 - (id) imageForIcon:(q)astate:(Q)b;
 - (id) searchFieldPositionAdjustment;
 - (void) setSearchFieldPositionAdjustment:(id)a;
 - (id) separatorImage;
 - (void) setSeparatorImage:(id)a;
 - (id) scopeBarBackgroundImage;
 - (void) setScopeBarBackgroundImage:(id)a;


@end
