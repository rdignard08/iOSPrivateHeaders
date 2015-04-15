
@interface CPAggregateDictionary : NSObject {

}
@property (nonatomic, assign, readonly, isEnabled) NSNumber* enabled;
 + (id) sharedAggregateDictionary;

 - (int) commit;
 - (void) significantTimeChanged;
 - (void) addValue:(long long)aforKey:(id)b;
 - (void) clearScalarKey:(id)a;
 - (void) setValue:(long long)aforScalarKey:(id)b;
 - (void) subtractValue:(long long)aforKey:(id)b;
 - (void) incrementKey:(id)a;
 - (void) decrementKey:(id)a;
 - (void) clearDistributionKey:(id)a;
 - (void) setValue:(double)aforDistributionKey:(id)b;
 - (void) pushValue:(double)aforKey:(id)b;
 - (BOOL) isEnabled;


@end
