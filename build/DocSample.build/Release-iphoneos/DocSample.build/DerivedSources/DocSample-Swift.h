// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC9DocSample11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;
@class NSBundle;
@class NSCoder;


/// The purpose of the ViewController view controller is to provide a user interface where a fullname can be created by a first and last name, and to break a fullname into its components at the same time.
///
/// There's a matching scene in the <em>Main.storyboard</em> file, and in that scene there are three textfields and two buttons. Go to Interface Builder for details.
///
/// The <code>ViewController
/// </code> class is a subclass of the <code>UIViewController
/// </code>, and it conforms to the <code>UITextFieldDelegate
/// </code> protocol.
SWIFT_CLASS("_TtC9DocSample14ViewController")
@interface ViewController : UIViewController <UITextFieldDelegate>

/// The textfield for the first name.
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified txtFirstName;

/// The textfield for the lastname.
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified txtLastName;

/// The textfield for the fullname.
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified txtFullName;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;

/// It triggers the creation of the full name by concatenating the first and last names.
///
/// <h3>How it works</h3>
/// If the <code>txtFirstName
/// </code> or the <code>txtLastName
/// </code> does not contain any text, the full name is not created. In any other case, the fullname is set to the <code>txtFullname
/// </code> textfield once it's created.\Remark 
///
/// 
/// It calls the <code>createFullName(_:lastname:)
/// </code> custom method to compose the fullname.\See 
///
/// 
/// <code>createFullName(_:lastname:)
/// </code>
///
/// \param sender The button that invokes this IBAction method.
- (IBAction)composeFullname:(id _Nonnull)sender;

/// It triggers the breaking of the fullname being in the txtFullName textfield into its components.
///
/// If the <code>txtFullName
/// </code> <em>does not contain any text</em> then nothing happens. In the opposite case, the fullname is broken into its parts (first name and last name) and each value is set to the <code>txtFirstName
/// </code> and <code>txtLastName
/// </code> respectively.\See 
///
/// <code>breakFullNameIntoParts(_:)
/// </code>
///
/// \param sender The button that invokes this IBAction method.
- (IBAction)breakFullname:(id _Nonnull)sender;

/// It composes a fullname based on the first and last names given as parameters.\Warning 
///
/// 
/// Both the first and last name should not be <em>nil</em> values.
///
/// \param firstname The first part of the full name.
///
/// \param lastname The second part of the fullname.
///
/// \returns  The full name as a string value.
- (NSString * _Nonnull)createFullName:(NSString * _Nonnull)firstname lastname:(NSString * _Nonnull)lastname;

/// It's used to dismiss the keyboard.
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
