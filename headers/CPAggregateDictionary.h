
@interface CPAggregateDictionary : NSObject {

}
@property (nonatomic, assign, readonly, isEnabled) NSNumber* enabled;
 + (id) sharedAggregateDictionary;

 - (i) commit;
 - (void) significantTimeChanged;
 - (void) addValue:(q)aforKey:(id)b;
 - (void) clearScalarKey:(id)a;
 - (void) setValue:(q)aforScalarKey:(id)b;
 - (void) subtractValue:(q)aforKey:(id)b;
 - (void) incrementKey:(id)a;
 - (void) decrementKey:(id)a;
 - (void) clearDistributionKey:(id)a;
 - (void) setValue:(d)aforDistributionKey:(id)b;
 - (void) pushValue:(d)aforKey:(id)b;
 - (BOOL) isEnabled;


@end
