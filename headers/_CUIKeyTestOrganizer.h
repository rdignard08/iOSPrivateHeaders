
@interface _CUIKeyTestOrganizer : NSObject {

    [16{_renditionkeytoken="identifier"S"value"S}] originalKey;
    @"NSArray" orderedNonZeroFlexibleAttributes;
    Q flexAttributesCount;
    [16{_renditionkeytoken="identifier"S"value"S}] testKey;
    Q chooseCount;
    Q subchooseCount;
}

 - (void) dealloc;
 - (Q) _attributeToBumpIndex;
 - (BOOL) _bumpTestKeyAttributeIndex:(Q)a;
 - (id) _nonZeroFlexibleAttributesInKey:(r^{_renditionkeytoken=SS})a;
 - (void) _bumpTestKey;
 - (id) initWithRenditionKey:(r^{_renditionkeytoken=SS})a;
 - (^{_renditionkeytoken=SS}) nextKey;


@end
