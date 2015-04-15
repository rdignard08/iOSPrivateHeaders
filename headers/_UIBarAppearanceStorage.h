
@interface _UIBarAppearanceStorage : NSObject {

    NSMutableDictionary* backgroundImages;
}
 + (long long) typicalBarPosition;

 - (void) dealloc;
 - (id) backgroundImageForBarPosition:(long long)a barMetrics:(long long)b ;
 - (void) setBackgroundImage:(id)a forBarPosition:(long long)b barMetrics:(long long)c ;
 - (BOOL) hasAnyCustomBackgroundImage;


@end
