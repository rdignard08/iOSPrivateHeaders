
@protocol NSCopying;
@interface UIKBMergeAction : NSObject <NSCopying> {

    NSString* _remainingKeyName;
    NSString* _disappearingKeyName;
    NSArray* _orderedKeyList;
    UIKBGeometry* _factors;
}
@property (nonatomic, retain, readwrite) NSString* remainingKeyName;
@property (nonatomic, retain, readwrite) NSString* disappearingKeyName;
@property (nonatomic, retain, readwrite) NSArray* orderedKeyList;
@property (nonatomic, retain, readwrite) UIKBGeometry* factors;
 + (id) mergeActionWithRemainingKeyName:(id)adisappearingKeyName:(id)bfactors:(id)c;
 + (id) mergeActionWithOrderedKeyList:(id)afactors:(id)b;

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (id) orderedKeyList;
 - (id) disappearingKeyName;
 - (id) remainingKeyName;
 - (id) factors;
 - (void) setRemainingKeyName:(id)a ;
 - (void) setDisappearingKeyName:(id)a ;
 - (void) setOrderedKeyList:(id)a ;
 - (void) setFactors:(id)a ;


@end
