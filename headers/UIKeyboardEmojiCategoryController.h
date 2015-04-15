
@interface UIKeyboardEmojiCategoryController : NSObject {

    i _currentCategory;
}
 + (Class) classForCategoryControl;

 - (id) initWithCategoryControl:(id)a;
 - (void) setCurrentCategory:(i)a;
 - (q) sectionWithOffsetPercentage:(d)a;


@end
