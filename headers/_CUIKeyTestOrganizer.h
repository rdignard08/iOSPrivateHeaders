
@interface _CUIKeyTestOrganizer : NSObject {

    [16{_renditionkeytoken="identifier"S"value"S}] originalKey;
    NSArray* orderedNonZeroFlexibleAttributes;
    unsigned long long flexAttributesCount;
    [16{_renditionkeytoken="identifier"S"value"S}] testKey;
    unsigned long long chooseCount;
    unsigned long long subchooseCount;
}

 - (void) dealloc;
 - (unsigned long long) _attributeToBumpIndex;
 - (BOOL) _bumpTestKeyAttributeIndex:(unsigned long long)a;
 - (id) _nonZeroFlexibleAttributesInKey:(r^{_renditionkeytoken=SS})a;
 - (void) _bumpTestKey;
 - (id) initWithRenditionKey:(r^{_renditionkeytoken=SS})a;
 - (^{_renditionkeytoken=SS}) nextKey;


@end
