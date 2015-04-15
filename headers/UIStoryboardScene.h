
@interface UIStoryboardScene : NSObject {

    UIViewController* sceneViewController;
}
@property (nonatomic, retain, readwrite) UIViewController* sceneViewController;

 - (void) dealloc;
 - (id) sceneViewController;
 - (void) setSceneViewController:(id)a ;


@end
