
@interface UIActivityItemImageRep : NSObject {

    id _asset;
    @? _thumbnailProvider;
    @? _dataProvider;
}
@property (nonatomic, retain, readwrite) NSNumber* asset;
@property (nonatomic, copy, readwrite) NSNumber* thumbnailProvider;
@property (nonatomic, copy, readwrite) NSNumber* dataProvider;
 + (id) activityItemImageRepWithAsset:(id)athumbnailProvider:(@?)bdataProvider:(@?)c;

 - (void) dealloc;
 - (id) data;
 - (void) setAsset:(id)a;
 - (void) setThumbnailProvider:(@?)a;
 - (void) setDataProvider:(@?)a;
 - (@?) thumbnailProvider;
 - (@?) dataProvider;
 - (id) thumbnail;
 - (id) asset;


@end
