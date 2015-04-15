
@interface UIViewAnimationContext : NSObject {

    @"NSArray" _viewAnimations;
    q _animationCount;
    id _completionHandler;
    @"UITableViewCell" _swipeToDeleteCell;
}
@property (nonatomic, retain, readwrite) NSArray* viewAnimations;
@property (nonatomic, assign, readwrite) NSNumber* animationCount;
@property (nonatomic, assign, readonly) NSNumber* completionHandler;
@property (nonatomic, retain, readwrite) UITableViewCell* swipeToDeleteCell;

 - (void) dealloc;
 - (id) initWithCompletionHandler:(@?)a;
 - (void) setViewAnimations:(id)a;
 - (q) animationCount;
 - (void) setAnimationCount:(q)a;
 - (void) setSwipeToDeleteCell:(id)a;
 - (id) viewAnimations;
 - (id) swipeToDeleteCell;
 - (@?) completionHandler;


@end
