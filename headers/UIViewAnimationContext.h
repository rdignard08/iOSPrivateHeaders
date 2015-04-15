
@interface UIViewAnimationContext : NSObject {

    @"NSArray" _viewAnimations;
    long long _animationCount;
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
 - (long long) animationCount;
 - (void) setAnimationCount:(long long)a;
 - (void) setSwipeToDeleteCell:(id)a;
 - (id) viewAnimations;
 - (id) swipeToDeleteCell;
 - (@?) completionHandler;


@end
