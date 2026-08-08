import matplotlib.pyplot as plt
from matplotlib.patches import Patch

#months = ["Jan","Feb","Mar","Apr", "May", "Jun"]
#sales = [100,120,150,90,200,80]

#plt.plot(months, sales)
#plt.xlabel("months")
#plt.ylabel("sales")
#plt.title("month's sales")
#plt.grid()
#plt.ylim([50, 225])
#plt.yticks([50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,225])
#plt.show()






days = ["Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"]
temp = [25, 32, 45, 27, 28, 29, 18]
color = []
for i in temp:
    if i < 30 and i > 20:
        color.append("green")
    else:
        if i > 30:
            color.append("red")
        elif i < 20:
            color.append("blue")
legend_elements = [
    Patch(facecolor="red", label="hot"),
    Patch(facecolor="green", label="moderate"),
    Patch(facecolor="blue", label="cold")
]

plt.figure(facecolor="lightblue")
plt.style.use("ggplot")
bars = plt.bar(days, temp, color=color)
for bar in bars:
    plt.text(
        bar.get_x() + bar.get_width()/2,
        bar.get_height(),
        f"{bar.get_height()}°",
        ha="center",
        va="bottom"
    )
plt.xlabel("days", fontsize=14, color="black")
plt.ylabel("Temperature(℃)", fontsize=14, color="black")
plt.yticks(fontsize=12)
plt.xticks(fontsize=12)
plt.title("weather over the week", fontsize= 20, fontweight="bold")
plt.grid(color="gray",
         linestyle="--",
         linewidth=1)
plt.legend(
    handles=legend_elements,
    title="Colors",
    fontsize=12,
    title_fontsize=14,
    loc="upper right",
    facecolor="lightyellow",
    edgecolor="black",
    framealpha=1,
    labelcolor="darkblue"
)
plt.tight_layout()
#--------------------------------------------------------#
humid = [80, 90, 40, 75, 45, 95, 60]
humcolor = []
for i in humid:
    if 70 <= i <= 90:
        humcolor.append("green")
    elif 70 > i:
        humcolor.append("red")
    elif i > 90:
        humcolor.append("blue")
plt.figure(facecolor="lightblue")
plt.style.use("ggplot") 
plt.bar(days, humid, color=humcolor)
plt.title("humidity over the week", fontsize= 20, fontweight="bold")
plt.xlabel("days", fontsize=14, color="black")
plt.ylabel("humidity(%)", fontsize=14, color="black")
plt.yticks(fontsize=12)
plt.xticks(fontsize=12)
plt.grid(color="gray",
         linestyle="--",
         linewidth=1)
plt.tight_layout()

#---------------------------------------------------------------------------------#
highwind = [16, 15, 21, 19, 18, 20, 25]
lowwind = [9, 8, 11, 10, 12, 6, 13]
plt.figure(facecolor="lightblue")
plt.style.use("ggplot")
plt.plot(days, highwind, color="royalblue", marker="o", label="fastest wind", markersize=8, linewidth=3, markerfacecolor="white", markeredgewidth=2, markeredgecolor="royalblue")
plt.plot(days, lowwind, color="deepskyblue", marker="o", label="slowest wind", markersize=8, linewidth=3, markerfacecolor="white", markeredgewidth=2, markeredgecolor="deepskyblue")
plt.title("wind speed over the week", fontsize= 20, fontweight="bold")
plt.grid(color="gray",
         linestyle="--",
         linewidth=1)
plt.xlabel("days", fontsize=14, color="black")
plt.ylabel("wind speed(km/h)", fontsize=14, color="black")
plt.yticks(fontsize=12)
plt.xticks(fontsize=12)
plt.legend(
    fontsize=12,
    title_fontsize=14,
    loc="upper left",
    facecolor="lightyellow",
    edgecolor="black",
    framealpha=0.5,
    labelcolor="darkblue"
)
plt.tight_layout()
plt.show()