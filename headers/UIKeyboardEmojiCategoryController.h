
@interface UIKeyboardEmojiCategoryController : NSObject {

    int _currentCategory;
}
 + (Class) classForCategoryControl;

 - (id) initWithCategoryControl:(id)a;
 - (void) setCurrentCategory:(int)a;
 - (long long) sectionWithOffsetPercentage:(double)a;


@end
