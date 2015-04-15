
@interface UIAutoscroll : NSObject {

    id m_target;
    {CGPoint="x"d"y"d} m_point;
    UIView<UIAutoscrollContainer> m_scrollContainer;
    int m_directions;
    double m_repeatInterval;
    NSTimer m_timer;
    unsigned long long m_count;
    BOOL m_active;
}
@property (nonatomic, retain, readwrite) NSNumber* target;
@property (nonatomic, retain, readwrite) NSNumber* scrollContainer;
@property (nonatomic, assign, readwrite) NSNumber* point;
@property (nonatomic, assign, readwrite) NSNumber* directions;
@property (nonatomic, assign, readwrite) NSNumber* repeatInterval;
@property (nonatomic, assign, readwrite) NSNumber* count;
@property (nonatomic, assign, readwrite) NSNumber* active;

 - (void) setCount:(unsigned long long)a;
 - (id) target;
 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (unsigned long long) count;
 - (void) invalidate;
 - (void) setTarget:(id)a;
 - (void) setRepeatInterval:(double)a;
 - (BOOL) active;
 - (BOOL) startAutoscroll:(id)ascrollContainer:(id)bpoint:({CGPoint=dd})cdirections:(int)drepeatInterval:(double)e;
 - (int) directions;
 - ({CGPoint=dd}) point;
 - (void) timerFired:(id)a;
 - (id) scrollContainer;
 - (double) repeatInterval;
 - (void) setPoint:({CGPoint=dd})a;
 - (void) setScrollContainer:(id)a;
 - (void) setDirections:(int)a;


@end
