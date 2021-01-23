namespace BSSCommLIB.Model;
        // class declarations
         class StateObjectDB;
         class AnalogSpeeddialList;
         class MeterObject;
         class VoIPSpeeddialList;
         class MessageBundle;
         class StateObject;
         class VoIPSpeeddial;
         class RouterObjectDB;
         class RouterObject;
         class RoomCombinerObject;
         class LevelObject;
         class RoomCombinerObjectDB;
         class MeterObjectDB;
         class VoIPKeypadKeys;
         class VoIPSVUtil;
         class VoIPSVKey;
         class AnalogSpeeddial;
         class LevelObjectDB;
     class StateObjectDB 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class RouterObjectDB 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class RoomCombinerObjectDB 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class MeterObjectDB 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

    static class VoIPKeypadKeys // enum
    {
        static SIGNED_LONG_INTEGER Key_0;
        static SIGNED_LONG_INTEGER Key_1;
        static SIGNED_LONG_INTEGER Key_2;
        static SIGNED_LONG_INTEGER Key_3;
        static SIGNED_LONG_INTEGER Key_4;
        static SIGNED_LONG_INTEGER Key_5;
        static SIGNED_LONG_INTEGER Key_6;
        static SIGNED_LONG_INTEGER Key_7;
        static SIGNED_LONG_INTEGER Key_8;
        static SIGNED_LONG_INTEGER Key_9;
        static SIGNED_LONG_INTEGER Key_Pound;
        static SIGNED_LONG_INTEGER Key_Star;
        static SIGNED_LONG_INTEGER Key_Comma;
        static SIGNED_LONG_INTEGER Key_Delete;
        static SIGNED_LONG_INTEGER Key_Clear;
        static SIGNED_LONG_INTEGER Key_Reject;
        static SIGNED_LONG_INTEGER Key_PickupHangUp;
        static SIGNED_LONG_INTEGER Key_Redial;
        static SIGNED_LONG_INTEGER Key_Hold;
    };

     class VoIPSVUtil 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class LevelObjectDB 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace BSSCommLIB.CCI_Support;
        // class declarations
         class Component;
           class BaseMessage;
     class Component 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ProcessSubscription ( BaseMessage msg );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

namespace BSSCommLIB.Components;
        // class declarations
         class PresetComponent;
         class StateComponent;
         class KeypadKeys;
         class AnalogDialerComponent;
         class VoIPDialerComponent;
         class GenericComponent;
         class MeterComponent;
         class RouterComponent;
         class LevelComponent;
         class RoomCombinerComponent;
           class IntegerCallback;
           class StringCallback;
     class PresetComponent 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION RecallPreset ( INTEGER PresetNumber );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class StateComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( INTEGER ControlType , INTEGER A_Value , INTEGER B_Value , STRING ObjectID );
        FUNCTION On ();
        FUNCTION Off ();
        FUNCTION Toggle ();
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

    static class KeypadKeys // enum
    {
        static SIGNED_LONG_INTEGER Key_0;
        static SIGNED_LONG_INTEGER Key_1;
        static SIGNED_LONG_INTEGER Key_2;
        static SIGNED_LONG_INTEGER Key_3;
        static SIGNED_LONG_INTEGER Key_4;
        static SIGNED_LONG_INTEGER Key_5;
        static SIGNED_LONG_INTEGER Key_6;
        static SIGNED_LONG_INTEGER Key_7;
        static SIGNED_LONG_INTEGER Key_8;
        static SIGNED_LONG_INTEGER Key_9;
        static SIGNED_LONG_INTEGER Key_Pound;
        static SIGNED_LONG_INTEGER Key_Star;
        static SIGNED_LONG_INTEGER Key_Comma;
        static SIGNED_LONG_INTEGER Key_Plus;
        static SIGNED_LONG_INTEGER Key_Delete;
        static SIGNED_LONG_INTEGER Key_Clear;
    };

     class AnalogDialerComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION SpeedDialCallback ( INTEGER Index , SIMPLSHARPSTRING Number , SIMPLSHARPSTRING Name );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( STRING ObjectID );
        FUNCTION Keypad ( KeypadKeys key );
        FUNCTION Redial ();
        FUNCTION Flash ();
        FUNCTION OnHook ();
        FUNCTION OffHook ();
        FUNCTION AutoAnswer ( INTEGER Rings );
        FUNCTION RingType ( INTEGER State );
        FUNCTION StoreSpeeddial ( INTEGER index );
        FUNCTION RecallSpeeddial ( INTEGER index );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnRingingChange;
        DelegateProperty IntegerCallback OnRingTypeChange;
        DelegateProperty IntegerCallback OnAutoAnswerChange;
        DelegateProperty IntegerCallback OnHookStatusChange;
        DelegateProperty StringCallback OnKeypadTextChange;
        DelegateProperty SpeedDialCallback OnSpeeddialEntryChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class VoIPDialerComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION SpeedDialCallback ( INTEGER Index , SIMPLSHARPSTRING Number , SIMPLSHARPSTRING Name );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( STRING ObjectID , INTEGER Line );
        FUNCTION Keypad ( VoIPKeypadKeys Key );
        FUNCTION AutoAnswerEnable ( INTEGER State );
        FUNCTION AutoAnswerRingCount ( INTEGER Count );
        FUNCTION SilentRingingEnable ( INTEGER State );
        FUNCTION StoreSpeeddial ( INTEGER index );
        FUNCTION StoreSpeeddialName ( INTEGER index , STRING Name );
        FUNCTION RecallSpeeddial ( INTEGER index );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnRingingChange;
        DelegateProperty IntegerCallback OnAutoAnswerChange;
        DelegateProperty IntegerCallback OnAutoAnswerRingCountChange;
        DelegateProperty IntegerCallback OnHookStatusChange;
        DelegateProperty IntegerCallback OnHoldStatusChange;
        DelegateProperty IntegerCallback OnLineStatusChange;
        DelegateProperty IntegerCallback OnRingTypeChange;
        DelegateProperty StringCallback OnKeypadTextChange;
        DelegateProperty StringCallback OnCallerIDTextChange;
        DelegateProperty SpeedDialCallback OnSpeeddialEntryChange;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class GenericComponent 
    {
        // class delegates
        delegate FUNCTION SignedLongCallback ( SIGNED_LONG_INTEGER value );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( STRING ObjectID , INTEGER StateVariable , INTEGER VirtualDevice );
        FUNCTION Set ( SIGNED_LONG_INTEGER Value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty SignedLongCallback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class MeterComponent 
    {
        // class delegates
        delegate FUNCTION MeterComponentFeedback ( SIGNED_INTEGER LevelValue , INTEGER GaugeValue );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( INTEGER ControlType , INTEGER A_Value , STRING ObjectID );
        FUNCTION SetRate ( INTEGER Rate );
        FUNCTION Subscribe ();
        FUNCTION Unsubscribe ();
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty MeterComponentFeedback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class RouterComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( INTEGER ControlType , INTEGER A_Value , STRING ObjectID );
        FUNCTION Route ( INTEGER Value );
        FUNCTION Deroute ( INTEGER Value );
        FUNCTION ToggleRoute ( INTEGER Value );
        FUNCTION Set ( INTEGER Value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class LevelComponent 
    {
        // class delegates
        delegate FUNCTION LevelComponentFeedback ( SIGNED_INTEGER LevelValue , INTEGER GaugeValue );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( INTEGER ControlType , INTEGER LevelType , INTEGER A_Value , INTEGER B_Value , INTEGER Step_Value , STRING ObjectID );
        FUNCTION Raise ();
        FUNCTION Lower ();
        FUNCTION Stop ();
        FUNCTION Set ( SIGNED_LONG_INTEGER Value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty LevelComponentFeedback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

     class RoomCombinerComponent 
    {
        // class delegates
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION RegisterComponent ( INTEGER CommandProcessorID );
        FUNCTION Configure ( INTEGER A_Value , STRING ObjectID );
        FUNCTION Set ( INTEGER Value );
        FUNCTION Poll ();
        FUNCTION Reinitialize ();
        FUNCTION Refresh ();
        FUNCTION Dispose ();
        FUNCTION GetInitialized ();
        FUNCTION ProcessSubscription ( BaseMessage msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty IntegerCallback OnUpdate;
        SIGNED_LONG_INTEGER ID;
        INTEGER CommandProcessorID;
    };

namespace BSSCommLIB.BSS_Support;
        // class declarations
         class BaseMessage;
         class BooleanMessage;
         class DiscreteConverter;
         class StringMessage;
         class Int32Message;
         class PresetMessage;
         class CalculatedSVCreator;
         class ProtocolUtil;
         class LogConverter;
         class FixedSVCreator;
         class PercentageConverter;
         class LinearConverter;
         class CalculatedConverter;
     class BaseMessage 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER Node;
        LONG_INTEGER ObjectID;
        INTEGER StateVar;
    };

     class BooleanMessage 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER Node;
        LONG_INTEGER ObjectID;
        INTEGER StateVar;
    };

     class DiscreteConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION ToBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION FromBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class StringMessage 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING Data[];
        INTEGER Node;
        LONG_INTEGER ObjectID;
        INTEGER StateVar;
    };

     class Int32Message 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Data;
        INTEGER Node;
        LONG_INTEGER ObjectID;
        INTEGER StateVar;
    };

     class PresetMessage 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION ToString ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();

        // class variables
        INTEGER __class_id__;

        // class properties
        SIGNED_LONG_INTEGER Data;
        INTEGER Node;
        LONG_INTEGER ObjectID;
        INTEGER StateVar;
    };

     class ProtocolUtil 
    {
        // class delegates

        // class events

        // class functions
        static LONG_INTEGER_FUNCTION ConvertObjectID ( STRING id );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class LogConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION ToBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION FromBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class PercentageConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION ToBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION FromBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class LinearConverter 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION ToBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION FromBSS ( SIGNED_LONG_INTEGER Value );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

namespace BSSCommLIB;
        // class declarations
         class ComponentUtil;
         class BSSComm;
     class ComponentUtil 
    {
        // class delegates

        // class events

        // class functions
        static FUNCTION Register ( Component me );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
    };

     class BSSComm 
    {
        // class delegates
        delegate FUNCTION StringCallback ( SIMPLSHARPSTRING msg );
        delegate FUNCTION IntegerCallback ( INTEGER value );

        // class events

        // class functions
        FUNCTION Connect ( STRING IPAddress , INTEGER port );
        FUNCTION Disconnect ();
        FUNCTION Configure ( INTEGER commandProcessorID , INTEGER nodeAddress );
        FUNCTION Initialize ( INTEGER state );
        FUNCTION StartRS232 ();
        FUNCTION ReceiveData ( STRING Msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHeartbeatTime ();
        FUNCTION GetInitialized ();
        SIGNED_LONG_INTEGER_FUNCTION GetResponseTime ();
        FUNCTION Reconnect ();
        FUNCTION SendHeartbeat ();
        FUNCTION FailedResponse ();
        FUNCTION Strikeout ();
        FUNCTION sendTrace ( STRING msg );
        FUNCTION Debug ( STRING msg );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        DelegateProperty StringCallback SendDebug;
        DelegateProperty IntegerCallback ClientSocketStatus;
        DelegateProperty IntegerCallback OnInitializeChange;
        DelegateProperty IntegerCallback OnCommunicatingChange;
        DelegateProperty StringCallback SendData;
        INTEGER ComponentListenerID;
    };

