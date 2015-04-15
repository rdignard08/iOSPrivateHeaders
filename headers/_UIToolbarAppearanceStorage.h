
@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage {

    UIImage* shadowImage;
    UIImage* topShadowImage;
    BOOL hidesShadow;
    UIImage* _backgroundImage;
    UIImage* _miniBackgroundImage;
    UIImage* _topBackgroundImage;
    UIImage* _miniTopBackgroundImage;
}
 + (long long) typicalBarPosition;

 - (void) dealloc;
 - (id) backgroundImage;
 - (id) miniBackgroundImage;
 - (BOOL) hidesShadow;
 - (void) setHidesShadow:(BOOL)a;
 - (id) shadowImage;
 - (void) setShadowImage:(id)a;
 - (id) topShadowImage;
 - (id) topBackgroundImage;
 - (id) miniTopBackgroundImage;
 - (void) setTopShadowImage:(id)a;
 - (void) setBackgroundImage:(id)a;
 - (void) setMiniBackgroundImage:(id)a;
 - (void) setTopBackgroundImage:(id)a;
 - (void) setMiniTopBackgroundImage:(id)a;


@end
