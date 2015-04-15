
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
 - (void) setSearchFieldBackgroundImage:(id)aforState:(unsigned long long)b;
 - (id) searchFieldBackgroundImageForState:(unsigned long long)a;
 - (void) setImage:(id)aforIcon:(long long)bstate:(unsigned long long)c;
 - (id) imageForIcon:(long long)astate:(unsigned long long)b;
 - (id) searchFieldPositionAdjustment;
 - (void) setSearchFieldPositionAdjustment:(id)a;
 - (id) separatorImage;
 - (void) setSeparatorImage:(id)a;
 - (id) scopeBarBackgroundImage;
 - (void) setScopeBarBackgroundImage:(id)a;


@end
