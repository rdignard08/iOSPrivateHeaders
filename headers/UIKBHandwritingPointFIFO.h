
@interface UIKBHandwritingPointFIFO : NSObject {

    UIKBHandwritingPointFIFO _nextFIFO;
}
@property (nonatomic, retain, readwrite) UIKBHandwritingPointFIFO* nextFIFO;

 - (void) clear;
 - (void) dealloc;
 - (void) addPoint:({CGPoint=dd})a;
 - (id) initWithFIFO:(id)a;
 - (void) setNextFIFO:(id)a;
 - (id) nextFIFO;
 - (void) emitPoint:({CGPoint=dd})a;
 - (void) flush;


@end
