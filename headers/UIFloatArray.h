
@interface UIFloatArray : NSObject {

    int _count;
    int _gapCount;
    ^i _gaps;
    float _gapValue;
    float _minValue;
    (?="singleton"f"array"^f) _values;
    {?="valueIsSingleton"b1"hideGaps"b1"unused"b30} _floatArrayFlags;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) _setupValuesWithCount:(int)asingleValue:(float)bisRefresh:(BOOL)c;
 - (BOOL) _setupValuesWithCount:(int)adataProvider:(id)bisRefresh:(BOOL)c;
 - (BOOL) _setupGapIndexesWithCount:(int)adataProvider:(id)bisRefresh:(BOOL)c;
 - (BOOL) _setupWithDataProvider:(id)avalueIsSingleton:(BOOL)bsingletonValue:(float)cisRefresh:(BOOL)d;
 - ({?=iiiiBB}) _indexesViaSingletonFromOffset:(float)atoOffset:(float)b;
 - ({?=iiiiBB}) _indexesViaArrayFromOffset:(float)atoOffset:(float)b;
 - (BOOL) refreshWithDataProvider:(id)asingleValue:(float)b;
 - (BOOL) refreshWithDataProvider:(id)a;
 - (float) singleValue;
 - (float) minValue;
 - (int) valueCount;
 - (float) sum;
 - ({?=ff}) offsetsForIndex:(int)a;
 - ({?=ff}) offsetsForGapIndex:(int)a;
 - ({?=iiiiBB}) indexesFromOffset:(float)atoOffset:(float)b;
 - (int) indexForGapIndex:(int)a;
 - (void) hideGaps:(BOOL)a;
 - (id) init;


@end
