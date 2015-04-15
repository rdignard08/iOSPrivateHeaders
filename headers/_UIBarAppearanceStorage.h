
@interface _UIBarAppearanceStorage : NSObject {

    @"NSMutableDictionary" backgroundImages;
}
 + (long long) typicalBarPosition;

 - (void) dealloc;
 - (id) backgroundImageForBarPosition:(long long)abarMetrics:(long long)b;
 - (void) setBackgroundImage:(id)aforBarPosition:(long long)bbarMetrics:(long long)c;
 - (BOOL) hasAnyCustomBackgroundImage;


@end
