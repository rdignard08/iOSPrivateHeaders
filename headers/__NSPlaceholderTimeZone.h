
@interface __NSPlaceholderTimeZone : NSTimeZone {

}
 + (void) initialize;
 + (id) immutablePlaceholder;

 - (id) retain;
 - (Vv) release;
 - (unsigned long long) retainCount;
 - (void) dealloc;
 - (id) data;
 - (id) name;
 - (double) daylightSavingTimeOffsetForDate:(id)a;
 - (long long) secondsFromGMTForDate:(id)a;
 - (id) abbreviationForDate:(id)a;
 - (BOOL) isDaylightSavingTimeForDate:(id)a;
 - (id) nextDaylightSavingTimeTransitionAfterDate:(id)a;
 - (id) __initWithName:(id)adata:(id)bcache:(BOOL)c;
 - (id) __initWithName:(id)acache:(BOOL)b;
 - (id) initWithName:(id)adata:(id)b;
 - (id) initWithName:(id)a;
 - (id) init;


@end
