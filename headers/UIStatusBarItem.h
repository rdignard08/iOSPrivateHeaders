
@interface UIStatusBarItem : NSObject {

    q _idiom;
    i _type;
}
@property (nonatomic, assign, readonly) NSNumber* type;
@property (nonatomic, assign, readonly) NSObject* viewClass;
@property (nonatomic, assign, readonly) NSNumber* priority;
@property (nonatomic, assign, readonly) NSNumber* leftOrder;
@property (nonatomic, assign, readonly) NSNumber* rightOrder;
@property (nonatomic, assign, readonly) NSString* indicatorName;
 + (id) itemWithType:(i)aidiom:(q)b;
 + (BOOL) typeIsValid:(i)a;
 + (BOOL) itemType:(i)aidiom:(q)bcanBeEnabledForData:(id)cstyle:(id)d;
 + (BOOL) itemType:(i)aidiom:(q)bappearsInRegion:(i)c;
 + (BOOL) isItemWithTypeExclusive:(i)a;

 - (id) description;
 - (BOOL) appearsOnLeft;
 - (BOOL) appearsOnRight;
 - (BOOL) appearsInRegion:(i)a;
 - (q) comparePriority:(id)a;
 - (id) indicatorName;
 - (i) leftOrder;
 - (i) rightOrder;
 - (i) centerOrder;
 - (Class) viewClass;
 - (q) compareLeftOrder:(id)a;
 - (q) compareRightOrder:(id)a;
 - (q) compareCenterOrder:(id)a;
 - (i) type;
 - (i) priority;
 - (id) initWithType:(i)a;


@end
