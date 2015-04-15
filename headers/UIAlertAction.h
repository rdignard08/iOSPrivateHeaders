
@protocol NSCopying;
@interface UIAlertAction : NSObject <NSCopying> {

    @"NSString" _title;
    long long _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isDefault;
    @"UIColor" _imageTintColor;
    @"UIColor" _titleTextColor;
    long long _style;
    @? _handler;
    @? _simpleHandler;
    @"UIImage" _image;
    @? _shouldDismissHandler;
    @"NSString" __descriptiveText;
    @"UIViewController" _contentViewController;
    @"<_UIAlertActionRepresenting>" __representer;
    @"UIAlertController" __alertController;
}
@property (nonatomic, copy, readwrite) NSString* title;
@property (nonatomic, assign, readwrite) NSNumber* style;
@property (nonatomic, assign, readwrite, isEnabled) NSNumber* enabled;
@property (nonatomic, copy, readwrite) NSNumber* handler;
@property (nonatomic, copy, readwrite) NSNumber* simpleHandler;
@property (nonatomic, retain, readwrite) UIImage* image;
@property (nonatomic, copy, readwrite) NSNumber* shouldDismissHandler;
@property (nonatomic, copy, readwrite, _setDescriptiveText:) NSString* _descriptiveText;
@property (nonatomic, retain, readwrite, _contentViewController, _setContentViewController:) UIViewController* contentViewController;
@property (atomic, assign, readwrite, _setRepresenter:) NSNumber* _representer;
@property (atomic, assign, readwrite, _setIsDefault:) NSNumber* _isDefault;
@property (nonatomic, assign, readwrite, _setAlertController:) UIAlertController* _alertController;
 + (id) actionWithTitle:(id)astyle:(long long)bhandler:(@?)c;
 + (id) _actionWithTitle:(id)aimage:(id)bstyle:(long long)chandler:(@?)dshouldDismissHandler:(@?)e;
 + (id) _actionWithTitle:(id)adescriptiveText:(id)bimage:(id)cstyle:(long long)dhandler:(@?)eshouldDismissHandler:(@?)f;
 + (id) _actionWithContentViewController:(id)astyle:(long long)b;

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) description;
 - (void) dealloc;
 - (id) _titleTextColor;
 - (void) _setAlertController:(id)a;
 - (void) setSimpleHandler:(@?)a;
 - (void) setShouldDismissHandler:(@?)a;
 - (@?) shouldDismissHandler;
 - (@?) simpleHandler;
 - (id) _contentViewController;
 - (id) _alertController;
 - (void) _setDescriptiveText:(id)a;
 - (void) _setTitleTextAlignment:(long long)a;
 - (void) _setChecked:(BOOL)a;
 - (void) _setIsDefault:(BOOL)a;
 - (void) _setContentViewController:(id)a;
 - (id) _representer;
 - (BOOL) _isDefault;
 - (BOOL) _isChecked;
 - (id) _descriptiveText;
 - (long long) _titleTextAlignment;
 - (id) _imageTintColor;
 - (void) _setImageTintColor:(id)a;
 - (void) _setTitleTextColor:(id)a;
 - (void) _willAddContentViewController;
 - (void) _didAddContentViewController;
 - (void) _setRepresenter:(id)a;
 - (void) setImage:(id)a;
 - (long long) style;
 - (@?) handler;
 - (void) setHandler:(@?)a;
 - (id) image;
 - (void) setStyle:(long long)a;
 - (BOOL) isEnabled;
 - (void) setEnabled:(BOOL)a;


@end
