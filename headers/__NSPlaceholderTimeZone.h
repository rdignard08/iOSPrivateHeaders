
@interface __NSPlaceholderTimeZone : NSTimeZone {

}
 + (void) initialize;
 + (id) immutablePlaceholder;

 - (id) retain;
 - (Vv) release;
 - (Q) retainCount;
 - (void) dealloc;
 - (id) data;
 - (id) name;
 - (d) daylightSavingTimeOffsetForDate:(id)a;
 - (q) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) __initWithName:(id)adata:(id)bcache:(BOOL)c;
 - (id) __initWithName:(id)acache:(BOOL)b;
 - (id) initWithName:(id)adata:(id)b;
 - (id) initWithName:(id)a;
 - (id) init;


@end
