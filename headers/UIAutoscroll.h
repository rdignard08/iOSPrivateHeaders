
@interface UIAutoscroll : NSObject {

    id m_target;
    {CGPoint="x"d"y"d} m_point;
    @"UIView<UIAutoscrollContainer>" m_scrollContainer;
    i m_directions;
    d m_repeatInterval;
    @"NSTimer" m_timer;
    Q m_count;
    BOOL m_active;
}
@property (nonatomic, retain, readwrite) NSNumber* target;
@property (nonatomic, retain, readwrite) NSNumber* scrollContainer;
@property (nonatomic, assign, readwrite) NSNumber* point;
@property (nonatomic, assign, readwrite) NSNumber* directions;
@property (nonatomic, assign, readwrite) NSNumber* repeatInterval;
@property (nonatomic, assign, readwrite) NSNumber* count;
@property (nonatomic, assign, readwrite) NSNumber* active;

 - (void) setCount:(Q)a;
 - (id) target;
 - (void) setActive:(BOOL)a;
 - (void) dealloc;
 - (Q) count;
 - (void) invalidate;
 - (void) setTarget:(id)a;
 - (void) setRepeatInterval:(d)a;
 - (BOOL) active;
 - (BOOL) startAutoscroll:(id)ascrollContainer:(id)bpoint:({CGPoint=dd})cdirections:(i)drepeatInterval:(d)e;
 - (i) directions;
 - ({CGPoint=dd}) point;
 - (void) timerFired:(id)a;
 - (id) scrollContainer;
 - (d) repeatInterval;
 - (void) setPoint:({CGPoint=dd})a;
 - (void) setScrollContainer:(id)a;
 - (void) setDirections:(i)a;


@end
