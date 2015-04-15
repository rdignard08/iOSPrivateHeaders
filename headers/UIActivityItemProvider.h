
@protocol UIActivityItemSource;
@interface UIActivityItemProvider : NSOperation <UIActivityItemSource> {

    float _progress;
    id _placeholderItem;
    NSString* _activityType;
    NSString* _status;
    id _providedItem;
}

 - (void) main;
 - (id) activityType;
 - (id) item;
 - (float) progress;
 - (void) setProgress:(float)a;
 - (void) dealloc;
 - (id) initWithPlaceholderItem:(id)a;
 - (id) placeholderItem;
 - (id) activityViewControllerPlaceholderItem:(id)a;
 - (id) activityViewController:(id)aitemForActivityType:(id)b;
 - (void) setPlaceholderItem:(id)a;
 - (void) setProvidedItem:(id)a;
 - (id) providedItem;
 - (void) _setActivityType:(id)a;
 - (void) setStatus:(id)a;
 - (id) status;


@end
