
@interface CAStateControllerLayer : NSObject {

    CALayer _layer;
    CAState _currentState;
    CAStateControllerUndo _undoStack;
    NSMutableArray _transitions;
    NSTimer _nextTimer;
    CAState _nextState;
    float _nextSpeed;
}
@property (atomic, assign, readonly) CALayer* layer;
@property (nonatomic, retain, readwrite) CAState* currentState;
@property (atomic, assign, readonly) CAStateControllerUndo* undoStack;

 - (void) dealloc;
 - (void) invalidate;
 - (id) currentState;
 - (id) initWithLayer:(id)a;
 - (void) setCurrentState:(id)a;
 - (void) addTransition:(id)a;
 - (void) removeTransition:(id)a;
 - (id) layer;
 - (id) undoStack;


@end
