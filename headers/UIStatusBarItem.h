
@interface UIStatusBarItem : NSObject {

    long long _idiom;
    int _type;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, assign, readonly) NSObject* viewClass;
@property (nonatomic, assign, readonly) NSNumber* priority;
@property (nonatomic, assign, readonly) NSNumber* leftOrder;
@property (nonatomic, assign, readonly) NSNumber* rightOrder;
@property (nonatomic, assign, readonly) NSString* indicatorName;
 + (id) itemWithType:(int)aidiom:(long long)b;
 + (BOOL) typeIsValid:(int)a;
 + (BOOL) itemType:(int)aidiom:(long long)bcanBeEnabledForData:(id)cstyle:(id)d;
 + (BOOL) itemType:(int)aidiom:(long long)bappearsInRegion:(int)c;
 + (BOOL) isItemWithTypeExclusive:(int)a;

 - (id) description;
 - (BOOL) appearsOnLeft;
 - (BOOL) appearsOnRight;
 - (BOOL) appearsInRegion:(int)a ;
 - (long long) comparePriority:(id)a ;
 - (id) indicatorName;
 - (int) leftOrder;
 - (int) rightOrder;
 - (int) centerOrder;
 - (Class) viewClass;
 - (long long) compareLeftOrder:(id)a ;
 - (long long) compareRightOrder:(id)a ;
 - (long long) compareCenterOrder:(id)a ;
 - (int) type;
 - (int) priority;
 - (id) initWithType:(int)a ;


@end
