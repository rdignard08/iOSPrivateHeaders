
@interface _UISearchBarAppearanceStorage : NSObject {

    NSMutableDictionary* searchFieldBackgroundImages;
    NSValue* searchFieldPositionAdjustment;
    NSMutableDictionary* iconImages;
    UIImage* separatorImage;
    UIImage* scopeBarBackgroundImage;
}
@property (nonatomic, retain, readwrite) NSValue* searchFieldPositionAdjustment;
@property (nonatomic, retain, readwrite) UIImage* separatorImage;
@property (nonatomic, retain, readwrite) UIImage* scopeBarBackgroundImage;

 - (void) dealloc;
 - (void) setSearchFieldBackgroundImage:(id)a forState:(unsigned long long)b ;
 - (id) searchFieldBackgroundImageForState:(unsigned long long)a ;
 - (void) setImage:(id)a forIcon:(long long)b state:(unsigned long long)c ;
 - (id) imageForIcon:(long long)a state:(unsigned long long)b ;
 - (id) searchFieldPositionAdjustment;
 - (void) setSearchFieldPositionAdjustment:(id)a ;
 - (id) separatorImage;
 - (void) setSeparatorImage:(id)a ;
 - (id) scopeBarBackgroundImage;
 - (void) setScopeBarBackgroundImage:(id)a ;


@end
