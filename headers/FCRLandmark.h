
@interface FCRLandmark : NSObject {

    @"NSString" type;
    Q pointCount;
    ^{CGPoint=dd} points;
}
@property (atomic, assign, readonly) NSString* type;
@property (atomic, assign, readonly) NSNumber* pointCount;
@property (atomic, assign, readonly) NSNumber* points;
 + (id) landmarkWithType:(id)apointCount:(Q)bpoints:(^{CGPoint=dd})c;

 - (void) dealloc;
 - (id) type;
 - (id) initWithType:(id)apointCount:(Q)bpoints:(^{CGPoint=dd})c;
 - (Q) pointCount;
 - (^{CGPoint=dd}) points;


@end
