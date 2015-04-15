
@interface _CUIPSDSublayerInfo : NSObject {

    unsigned int _numOfSublayers;
}
 + (id) newWithSublayerCount:(unsigned int)aindexSet:(id)b;

 - (unsigned int) numberOfSublayers;
 - (unsigned int) sublayerAtIndex:(unsigned int)a isValid:(^B)b ;


@end
