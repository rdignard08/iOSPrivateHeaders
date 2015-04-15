
@interface CPAggregateDictionary : NSObject {

}
@property (nonatomic, assign, readonly, getter=isEnabled) NSNumber* enabled;
 + (id) sharedAggregateDictionary;

 - (int) commit;
 - (void) significantTimeChanged;
 - (void) addValue:(long long)a forKey:(id)b ;
 - (void) clearScalarKey:(id)a ;
 - (void) setValue:(long long)a forScalarKey:(id)b ;
 - (void) subtractValue:(long long)a forKey:(id)b ;
 - (void) incrementKey:(id)a ;
 - (void) decrementKey:(id)a ;
 - (void) clearDistributionKey:(id)a ;
 - (void) setValue:(double)a forDistributionKey:(id)b ;
 - (void) pushValue:(double)a forKey:(id)b ;
 - (BOOL) isEnabled;


@end
