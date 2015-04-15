
@interface _UIBarAppearanceStorage : NSObject {

    @"NSMutableDictionary" backgroundImages;
}
 + (q) typicalBarPosition;

 - (void) dealloc;
 - (id) backgroundImageForBarPosition:(q)abarMetrics:(q)b;
 - (void) setBackgroundImage:(id)aforBarPosition:(q)bbarMetrics:(q)c;
 - (BOOL) hasAnyCustomBackgroundImage;


@end
