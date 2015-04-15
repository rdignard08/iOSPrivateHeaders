
@interface CUIPSDLayerBaseRef : NSObject {

    CUIPSDImageRef* _imageRef;
    unsigned int _layerIndex;
}
@property (atomic, assign, readonly) NSNumber* bounds;
@property (atomic, assign, readonly) NSNumber* visibility;
@property (atomic, assign, readonly) NSNumber* opacity;
@property (atomic, assign, readonly) NSNumber* fillOpacity;
@property (atomic, assign, readonly) NSNumber* blendMode;
@property (atomic, assign, readonly) NSNumber* hasLayerMask;
@property (atomic, assign, readonly) NSNumber* hasVectorMask;

 - (id) name;
 - (int) blendMode;
 - (^{CPSDLayerRecord=^^?^{CPSDFile}IIIIS{vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}^{CPSDChannelLengthInfo}{__compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> >=^{CPSDChannelLengthInfo}}}IICCCCI{CPSDLayerMaskData=^^?^{CPSDFile}IIIIICCSIIIICC}{CPSDLayerBlendingRanges=^^?^{CPSDFile}III{vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}^{CPSDChannelBlendingInfo}{__compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> >=^{CPSDChannelBlendingInfo}}}}[256c]{CPSDAdditionalLayerInfo=^^?^{CPSDFile}I^{CPSDAdditionalLayerInfoItem}}}) _psdLayerRecord;
 - (BOOL) hasVectorMask;
 - (BOOL) hasLayerMask;
 - (id) _psdImageRef;
 - (BOOL) isLayerGroup;
 - (double) fillOpacity;
 - (id) layerMaskRef;
 - (id) vectorMaskRef;
 - (^{CGImage=}) _createMaskFromAlphaChannel:(long long)a ;
 - ({CGRect={CGPoint=dd}{CGSize=dd}}) bounds;
 - (double) opacity;
 - (BOOL) visibility;


@end
