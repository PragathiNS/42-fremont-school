BOAR_CMD="DISPLAY=:0 firefox"
BOAR_DIR="boar"
BOAR_FILES="boar.html"

mkdir -p ~/.$BOAR_DIR
if [ $? -ne 0 ] ; then
	echo "Failed to create script directory, try again!"
	exit 1
fi
cp ./$BOAR_FILES ~/.$BOAR_DIR

MONTH="12"
DAY="21"
HOUR="8"
MIN="42"
MER="AM"

if [ 1 -eq "${#MIN}" ] ; then
	MIN="0$MIN"
fi
if [ 1 -eq "${#HOUR}" ] ; then
	HOUR="0$HOUR"
fi
if [ 1 -eq "${#DAY}" ] ; then
	DAY="0$DAY"
fi
if [ 1 -eq "${#MONTH}" ] ; then
	MONTH="0$MONTH"
fi

YEAR="$(date +'%Y')"
CURRENT_DATE="$(date +'%Y-%m-%d')"
if [ $CURRENT_DATE \> $YEAR-$MONTH-$DAY ] ; then
	YEAR="$(date +'%Y') + 1 year"
fi
BOAR_SCRIPT="$BOAR_CMD ~/.$BOAR_DIR/$BOAR_FILES"
echo "$BOAR_SCRIPT" | at $HOUR:$MIN $MER $MONTH/$DAY/$YEAR
