
@interface UIFloatArray : NSObject {

    i _count;
    i _gapCount;
    ^i _gaps;
    f _gapValue;
    f _minValue;
    (?="singleton"f"array"^f) _values;
    {?="valueIsSingleton"b1"hideGaps"b1"unused"b30} _floatArrayFlags;
}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) _setupValuesWithCount:(i)asingleValue:(f)bisRefresh:(BOOL)c;
 - (BOOL) _setupValuesWithCount:(i)adataProvider:(id)bisRefresh:(BOOL)c;
 - (BOOL) _setupGapIndexesWithCount:(i)adataProvider:(id)bisRefresh:(BOOL)c;
 - (BOOL) _setupWithDataProvider:(id)avalueIsSingleton:(BOOL)bsingletonValue:(f)cisRefresh:(BOOL)d;
 - ({?=iiiiBB}) _indexesViaSingletonFromOffset:(f)atoOffset:(f)b;
 - ({?=iiiiBB}) _indexesViaArrayFromOffset:(f)atoOffset:(f)b;
 - (BOOL) refreshWithDataProvider:(id)asingleValue:(f)b;
 - (BOOL) refreshWithDataProvider:(id)a;
 - (f) singleValue;
 - (f) minValue;
 - (i) valueCount;
 - (f) sum;
 - ({?=ff}) offsetsForIndex:(i)a;
 - ({?=ff}) offsetsForGapIndex:(i)a;
 - ({?=iiiiBB}) indexesFromOffset:(f)atoOffset:(f)b;
 - (i) indexForGapIndex:(i)a;
 - (void) hideGaps:(BOOL)a;
 - (id) init;


@end
