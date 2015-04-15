
@interface _CUIPSDSublayerInfo : NSObject {

    I _numOfSublayers;
}
 + (id) newWithSublayerCount:(I)aindexSet:(id)b;

 - (I) numberOfSublayers;
 - (I) sublayerAtIndex:(I)aisValid:(^B)b;


@end
