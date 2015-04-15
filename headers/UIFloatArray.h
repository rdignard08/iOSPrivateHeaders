
@interface UIFloatArray : NSObject {

    int _count;
    int _gapCount;
    ^i _gaps;
    float _gapValue;
    float _minValue;
    (?="singleton"f"array"^f) _values;
    {?="valueIsSingleton"b1"hideGaps"b1"unused"b30} _floatArrayFlags;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) _setupValuesWithCount:(int)a singleValue:(float)b isRefresh:(BOOL)c ;
 - (BOOL) _setupValuesWithCount:(int)a dataProvider:(id)b isRefresh:(BOOL)c ;
 - (BOOL) _setupGapIndexesWithCount:(int)a dataProvider:(id)b isRefresh:(BOOL)c ;
 - (BOOL) _setupWithDataProvider:(id)a valueIsSingleton:(BOOL)b singletonValue:(float)c isRefresh:(BOOL)d ;
 - ({?=iiiiBB}) _indexesViaSingletonFromOffset:(float)a toOffset:(float)b ;
 - ({?=iiiiBB}) _indexesViaArrayFromOffset:(float)a toOffset:(float)b ;
 - (BOOL) refreshWithDataProvider:(id)a singleValue:(float)b ;
 - (BOOL) refreshWithDataProvider:(id)a ;
 - (float) singleValue;
 - (float) minValue;
 - (int) valueCount;
 - (float) sum;
 - ({?=ff}) offsetsForIndex:(int)a ;
 - ({?=ff}) offsetsForGapIndex:(int)a ;
 - ({?=iiiiBB}) indexesFromOffset:(float)a toOffset:(float)b ;
 - (int) indexForGapIndex:(int)a ;
 - (void) hideGaps:(BOOL)a ;
 - (id) init;


@end
