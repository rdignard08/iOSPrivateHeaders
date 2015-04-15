
@protocol CAStateRecorder;
@interface CAStateControllerUndo : NSObject <CAStateRecorder> {

    CAStateControllerUndo* _next;
    CAState* _state;
    NSMutableArray* _elements;
    NSMutableArray* _transitions;
}
@property (atomic, assign, readonly) CAStateControllerUndo* next;
@property (nonatomic, retain, readwrite) CAState* state;
@property (nonatomic, retain, readwrite) NSMutableArray* elements;
@property (nonatomic, retain, readwrite) NSMutableArray* transitions;

 - (void) dealloc;
 - (id) next;
 - (id) state;
 - (void) setState:(id)a;
 - (void) setElements:(id)a;
 - (id) elements;
 - (void) addElement:(id)a;
 - (void) willAddLayer:(id)a;
 - (void) addTransition:(id)a;
 - (id) transitions;
 - (void) setTransitions:(id)a;


@end
