
@protocol NSCopying;
@interface UIGestureDelayedTouch : NSObject <NSCopying> {

    @"UITouch" _touch;
    @"UITouch" _stateWhenDelayed;
    @"UITouch" _stateWhenDelivered;
    @"UIEvent" _event;
    q _delayCount;
    BOOL _cloneForSecondDelivery;
}
@property (atomic, retain, readwrite) UITouch* touch;
@property (atomic, retain, readwrite) UITouch* stateWhenDelayed;
@property (atomic, retain, readwrite) UITouch* stateWhenDelivered;
@property (atomic, retain, readwrite) UIEvent* event;
@property (atomic, assign, readwrite) NSNumber* cloneForSecondDelivery;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) touch;
 - (void) setTouch:(id)a;
 - (void) setEvent:(id)a;
 - (void) setStateWhenDelayed:(id)a;
 - (BOOL) cloneForSecondDelivery;
 - (q) decrementDelayCount;
 - (void) incrementDelayCount;
 - (q) delayCount;
 - (void) saveCurrentTouchState;
 - (q) phaseForDelivery;
 - (d) timestampForDelivery;
 - (id) stateWhenDelayed;
 - (id) stateWhenDelivered;
 - (void) setStateWhenDelivered:(id)a;
 - (id) event;
 - (void) setCloneForSecondDelivery:(BOOL)a;
 - (id) init;


@end
