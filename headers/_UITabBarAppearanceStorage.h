
@interface _UITabBarAppearanceStorage : NSObject {

    @"NSMutableDictionary" _dividerImages;
    @"UIImage" backgroundImage;
    @"UIImage" shadowImage;
    @"UIImage" selectionIndicatorImage;
    @"UIColor" barTintColor;
    @"UIColor" selectedImageTintColor;
    @"_UITabBarItemAppearanceStorage" tabItemAppearanceStorage;
}
@property (nonatomic, retain, readwrite) UIImage* backgroundImage;
@property (nonatomic, retain, readwrite) UIImage* shadowImage;
@property (nonatomic, retain, readwrite) UIImage* selectionIndicatorImage;
@property (nonatomic, retain, readwrite) UIColor* barTintColor;
@property (nonatomic, retain, readwrite) UIColor* selectedImageTintColor;
@property (nonatomic, retain, readwrite) _UITabBarItemAppearanceStorage* tabItemAppearanceStorage;
@property (nonatomic, copy, readonly) NSDictionary* dividerImagesForCoding;

 - (void) dealloc;
 - (id) backgroundImage;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (void) setBarTintColor:(id)a;
 - (id) barTintColor;
 - (void) setBackgroundImage:(id)a;
 - (void) setTabItemAppearanceStorage:(id)a;
 - (id) tabItemAppearanceStorage;
 - (id) _tabItemAppearanceStorage;
 - (void) _setDividerImage:(id)aforLeftButtonState:(Q)brightButtonState:(Q)c;
 - (id) _dividerImageForLeftButtonState:(Q)arightButtonState:(Q)b;
 - (id) dividerImagesForCoding;
 - (id) selectionIndicatorImage;
 - (void) setSelectionIndicatorImage:(id)a;
 - (id) selectedImageTintColor;
 - (void) setSelectedImageTintColor:(id)a;


@end
